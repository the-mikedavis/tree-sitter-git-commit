# `tree-sitter-gitcommit`

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for git commit messages.

### Status

Incomplete - just starting out.

### TODO

- [ ] short subjects 0..=50 chars
- [ ] long subjects 51..=72 chars
- [ ] message bodies with at-most 72 chars
- [ ] comments (always **starting** a line with a `#` character)
- [ ] issue links (`/#\d+/`)

### Gravy

- [ ] expose `modified:`, `added:`, etc. from the summary as named nodes for highlighting
- [ ] parse structured subjects (e.g. `chore(ci): update deps`)
