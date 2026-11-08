# Green Efficiency Analysis

## Measurement Methodology

I measured three programs in the same sandbox. I ran the baseline loop three times with 100,000,000 iterations per run and recorded each reported execution time. I ran the algorithm comparison nine times and calculated the arithmetic mean for each implementation. For the instrumentation program, I recorded one run. I placed the first `clock()` reading before building the dataset and took another reading after each of the three phases. Adjacent readings define each phase, and the first and last readings define the total. I divided the differences by `CLOCKS_PER_SEC` to express them in seconds. The final reading came before printing, so the reported total excludes output formatting and printing.

## Observed Performance Differences

The baseline runs took 0.109949, 0.109968, and 0.113540 seconds, with a mean of approximately 0.111152 seconds. The fastest and slowest runs differed by 0.003591 seconds despite the identical iteration count. In the nine comparison runs, the naive implementation averaged 2.392542 seconds and the single-pass implementation averaged 0.000115556 seconds. Dividing the unrounded means gives a ratio of approximately 20,705. The naive implementation returned 625,025,000, while the single-pass implementation returned 25,000. The first counts even elements across successive prefixes, and the second counts each even element once. The timing ratio therefore describes two different workloads.

The instrumentation run reported a total of 0.000398 seconds. Building the dataset took 0.000169 seconds, processing took 0.000147 seconds, and reducing the checksum took 0.000082 seconds. The phase times add up to the reported total at the displayed precision. Building the dataset was the longest measured phase in this run.

## Relation Between Runtime and Energy Consumption

The comparison shows that the naive workload used substantially more CPU time in the measured runs. CPU time helps identify where a program spends processing effort. To quantify energy consumption, however, the experiment would also need measurements of power over time. These programs recorded time only, so the measured ratio supports a runtime comparison and provides no numerical estimate of energy savings.

## Limitations of the Experiment

The instrumentation program was measured once, so the ordering of its phases may vary across runs. Even the baseline showed some variation with a fixed iteration count. The single-pass times ranged from 0.000085 to 0.000135 seconds, so the ratio depends on timing measurements for a very short operation. The differing counts also limit what can be concluded about the speed of two implementations of the same task.

## Practical Engineering Takeaway

Before comparing runtimes, I would verify that both implementations produce the intended result for identical inputs. Then I would repeat the measurements under the same conditions and report the range alongside the mean. For the instrumented program, dataset construction would be my first phase to remeasure because it had the largest recorded duration. Repeating the phase measurements would help establish whether it consistently takes the most CPU time before I decide where to optimize.
