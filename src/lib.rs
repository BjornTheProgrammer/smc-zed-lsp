use zed_extension_api::{self as zed, Result, serde_json, settings::LspSettings};

struct SmcExtension;

impl zed::Extension for SmcExtension {
    fn new() -> Self {
        Self
    }

    fn language_server_command(
        &mut self,
        _language_server_id: &zed::LanguageServerId,
        worktree: &zed::Worktree,
    ) -> Result<zed::Command> {
        let wgsl_lsp_cmd = worktree.which("smc-lsp");
        let path = wgsl_lsp_cmd.ok_or_else(|| "smc-lsp must be in your path".to_string())?;

        Ok(zed::Command {
            command: path,
            args: vec![],
            env: Default::default(),
        })
    }

    fn language_server_workspace_configuration(
        &mut self,
        _language_server_id: &zed::LanguageServerId,
        worktree: &zed::Worktree,
    ) -> Result<Option<serde_json::Value>> {
        let settings = LspSettings::for_worktree("smc-lsp", worktree)
            .ok()
            .and_then(|lsp_settings| lsp_settings.settings.clone())
            .unwrap_or_default();

        Ok(Some(serde_json::json!({
            "smc-lsp": settings
        })))
    }
}

zed::register_extension!(SmcExtension);
