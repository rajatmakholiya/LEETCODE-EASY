package main

import (
	"fmt"
)

func countHillValley(nums []int) int {
	if len(nums) == 0 {
		return 0
	}

	arr := []int{nums[0]}
	for _, val := range nums {
		if arr[len(arr)-1] != val {
			arr = append(arr, val)
		}
	}

	count := 0
	for i := 1; i < len(arr)-1; i++ {
		if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) || (arr[i] < arr[i-1] && arr[i] < arr[i+1]) {
			count++
		}
	}

	return count
}

func main() {
	fmt.Println(countHillValley([]int{2, 4, 1, 1, 6, 5}))
}
