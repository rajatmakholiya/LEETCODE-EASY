package main

import {
	"fmt"
}

func search ( nums []int, target int) int {
	for indx, val := range nums{
		if val == target{
			return indx
		}
	}
	return -1
}