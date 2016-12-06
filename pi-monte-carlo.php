<?php
$niter = intval($argv[1]);
$count = 0;
for ($i = 0; $i < $niter; $i++){
    $x = (double) mt_rand() / getrandmax();
    $y = (double) mt_rand() / getrandmax();
    $z = $x * $x + $y * $y;
    if ($z <= 1) {
        $count++;
    }
}
$pi = (double) $count / $niter * 4;
printf ("# of trials= %d , estimate of pi is %g \n", $niter, $pi);

