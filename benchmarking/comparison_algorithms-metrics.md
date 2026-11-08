# Algorithmic Efficiency Comparison

Both implementations were timed across nine runs in the same sandbox.

| Run | Naive time (seconds) | Single-pass time (seconds) |
| --- | ---: | ---: |
| 1 | 2.421920 | 0.000119 |
| 2 | 2.453517 | 0.000123 |
| 3 | 2.365969 | 0.000123 |
| 4 | 2.414930 | 0.000123 |
| 5 | 2.404579 | 0.000123 |
| 6 | 2.384596 | 0.000135 |
| 7 | 2.423906 | 0.000085 |
| 8 | 2.303738 | 0.000121 |
| 9 | 2.359724 | 0.000088 |
| **Average** | **2.392542111** | **0.000115556** |

The naive implementation took approximately **20,705 times as long** as
the single-pass implementation on average. The ratio was calculated by
dividing the unrounded naive average by the unrounded single-pass average.

The implementations returned different counts in every run. The naive
implementation returned 625025000 because it counts even elements across
all prefixes. The single-pass implementation returned 25000 because it
counts each even element once. The timing ratio therefore compares two
different workloads.
