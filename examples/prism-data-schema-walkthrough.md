# Prism Data Schema Forge Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 176 | ship |
| stress | lineage depth | 169 | ship |
| edge | partition skew | 112 | watch |
| recovery | quality gap | 116 | watch |
| stale | schema drift | 162 | ship |

Start with `baseline` and `edge`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`baseline` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
