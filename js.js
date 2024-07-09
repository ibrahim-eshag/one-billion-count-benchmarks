const targetCount = 1000000000; // One billion

function countUpToTrillion() {
  const startTime = process.hrtime(); // Get start time in high-resolution

  let count = 0;
  while (count < targetCount) {
    count++;
  }

  const endTime = process.hrtime(startTime); // Get end time
  const elapsedSeconds = endTime[0] + endTime[1] / 1e9; // Convert to seconds

  console.log(
    `Counted up to ${targetCount} in ${elapsedSeconds.toFixed(3)} seconds`
  );
}

countUpToTrillion();
