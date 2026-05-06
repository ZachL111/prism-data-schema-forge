# prism-data-schema-forge

`prism-data-schema-forge` is a C++ project in data engineering. Its focus is to build a C++ toolkit that studies schema behavior through windowed input fixtures, with late-data behavior checks and fixture-scale datasets.

## Why This Exists

The point is to make a small domain rule concrete enough that a reader can change it and immediately see what broke.

## Prism Data Schema Forge Review Notes

Start with `schema drift` and `partition skew`. Those cases create the widest score spread in this repo, so they are the best quick check when the model changes.

## Capabilities

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/prism-data-schema-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `schema drift` and `partition skew`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Shape

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C++ implementation avoids hidden state so fixture changes are easy to reason about.

## Local Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Verification

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Roadmap

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
