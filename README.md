# SMC for Zed

[Zed](https://zed.dev) support for [SMC](https://github.com/BjornTheProgrammer/smc-language) assembly: `.smc` (BatPU-2), `.tasm` (Tau) and `.lasm` (Lyminal) files.

- Syntax highlighting from an SMC tree-sitter grammar
- Errors, hover, go to definition, references, completion and program size from [`smc-lsp`](https://github.com/BjornTheProgrammer/smc-language)

## Install

1. Install `smc-lsp` so it's on your `PATH`, either from the [latest release](https://github.com/BjornTheProgrammer/smc-language/releases/latest) or from source:

   ```bash
   cargo install --git https://github.com/BjornTheProgrammer/smc-language smc-lsp
   ```

2. Install Rust with [rustup](https://rustup.rs), which Zed needs to build dev extensions.
3. Clone this repository.
4. In Zed, run **zed: install dev extension** and pick the cloned folder.
