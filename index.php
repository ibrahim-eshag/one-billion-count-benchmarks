<?php


function countUpToBillion()
{
    $targetCount = 1000000000; // One billion

    $startTime = microtime(true); // Get start time in high-resolution

    $count = 0;
    while ($count < $targetCount) {
        $count++;
    }

    $endTime = microtime(true); // Get end time
    $elapsedTime = $endTime - $startTime;

    echo "Counted up to " . number_format($targetCount) . " in " . number_format($elapsedTime, 3) . " seconds\n";
}

countUpToBillion();
