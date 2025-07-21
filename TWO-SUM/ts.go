package main

import (
	"fmt"
	"math"
)

func twoSum(nums []int, target int) []int {
	m:= make(map[int]int)
	for i, val:= range nums{
		dif := int(math.Abs(float64(target - val)))
		if index,ok := m[dif]; ok {
			return []int{index, i}
		}
		m[val] = i
	}
	return nil
}

func main(){
	fmt.Println(twoSum([]int{2,7,11,15}, 9))
}
