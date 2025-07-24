package main

import (
	"fmt"
)

func findDisappearedNumbers(nums []int) []int {
	set := make(map[int]bool)
	for _, num := range nums {
		set[num] = true
	}

	var result []int
	for i := 1; i <= len(nums); i++ {
		if !set[i] {
			result = append(result, i)
		}
	}

	return result
}

func main() {
	nums := []int{4, 3, 2, 7, 8, 2, 3, 1}
	missing := findDisappearedNumbers(nums)
	fmt.Println("Missing numbers:", missing)
}
