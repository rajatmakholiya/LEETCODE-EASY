package main

import (
	"fmt"
)

func checkIfExist(arr []int) bool {
	set := make(map[int]bool)

	for _, val := range arr {
		if set[val*2] {
			return true
		}
		if val%2 == 0 && set[val/2] {
			return true
		}
		set[val] = true
	}
	return false
}

func main() {
	arr := []int{10, 2, 5, 3}
	fmt.Println(checkIfExist(arr)) 
}
