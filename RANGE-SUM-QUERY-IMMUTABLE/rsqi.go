package main

import (
	"fmt"
)

type NumArray struct {
	prefix []int
}

func Constructor(nums []int) NumArray {
	prefix := make([]int, len(nums))
	prev := 0
	for i := 0; i < len(nums); i++ {
		prev += nums[i]
		prefix[i] = prev
	}
	return NumArray{prefix: prefix}
}

func (this *NumArray) SumRange(left int, right int) int {
	if left == 0 {
		return this.prefix[right]
	}
	return this.prefix[right] - this.prefix[left-1]
}

func main() {
	commands := []string{"NumArray", "sumRange", "sumRange", "sumRange"}
	inputs := [][]int{
		{-2, 0, 3, -5, 2, -1},
		{0, 2},
		{2, 5},
		{0, 5},
	}

	obj := Constructor(inputs[0])
	results := []interface{}{nil}
	results = append(results, obj.SumRange(inputs[1][0], inputs[1][1]))
	results = append(results, obj.SumRange(inputs[2][0], inputs[2][1]))
	results = append(results, obj.SumRange(inputs[3][0], inputs[3][1]))

	fmt.Println(results)
}
