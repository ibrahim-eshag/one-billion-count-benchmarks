package main

import (
	"fmt"
	"time"
)

const targetCount = 1000000000 // One billion

func countUpToTrillion() {
	startTime := time.Now()

	count := 0
	for count < targetCount {
		count++
	}

	elapsedTime := time.Since(startTime)
	fmt.Printf("Counted up to %d in %s\n", targetCount, elapsedTime)
}

func main() {
	countUpToTrillion()
}
