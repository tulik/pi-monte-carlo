# [PHP7 is 2-3 times faster. Is it finally a breakdown?](https://tulik.github.io/case/2016/10/07/comparison-of-efficency)
## PI Monte Carlo method of successive approximations

### ANSI C solution build, run and timing:
`gcc -o pi-monte-carlo pi-monte-carlo.c` <br />
`time ./pi-monte-carlo 100000000` <br />
### Result
<pre>
<b># of trials= 100000000 , estimate of pi is 3.14165</b>

real	0m3.829s
user	0m3.680s
sys	0m0.008s
</pre>
<br />
### Golang solution run and timing:
`time go run pi-monte-carlo.go 10000000` <br />
### Result
<pre>
<b># of trials= 100000000 , estimate of pi is 3.14184392</b>

real	0m4.549s
user	0m4.356s
sys	0m0.036s
</pre>
<br />
### PHP solution run and timing:
`time php pi-monte-carlo.php 10000000` <br />
### Result
<pre>
<b># of trials= 100000000 , estimate of pi is 3.142</b>

real	0m41.841s
user	0m39.164s
sys	0m0.024s
</pre>
