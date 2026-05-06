# Field Notes

The fixture is small on purpose, which makes each domain case carry real weight.

The domain cases cover `schema drift`, `lineage depth`, `partition skew`, and `quality gap`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

`baseline` is the strongest case at 176 on `schema drift`. `edge` is the cautious anchor at 112 on `partition skew`.

The language-specific addition keeps the review model behind a small header and compiled test harness.
