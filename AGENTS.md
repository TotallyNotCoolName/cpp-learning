# AGENTS.md

## Language

- Write C++ only (C++17/20). No other languages.
- Prefer the standard library; no external deps unless asked.

## Simplicity over cleverness

- Solve the problem with the simplest correct approach. No abstractions,
  patterns, or helper classes unless they remove real complexity.
- Don't add configuration, layers, or generality that isn't needed now.
- If ~20 lines of plain code works, don't write ~120 lines of templates.

## Readability (for the human reader)

- Small functions, early returns, descriptive names.
- No macros except where standard. No one-liners that hide what's happening.
- Comments only for "why", never "what".
- Flat structure: avoid nesting deeper than 3 levels.

## Style

- 4-space indent, ~100 col limit, braces on new line.
- `const` and `auto` where they make intent clearer.
- No `using namespace std;` at file scope.
- RAII for resources; no raw `new`/`delete`.

## Rules

- Don't touch code you weren't asked to touch.
- No "while I'm here..." refactors.
- Keep diffs small and reviewable.
