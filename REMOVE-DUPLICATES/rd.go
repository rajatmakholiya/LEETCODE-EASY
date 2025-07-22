package main 

import{
	"fmt"
}

func removeDuplicate(nums [] int) int {
	// i := 1
	// for (int j =0; j<len(nums); j++){
	// 	if(nums[i] != nums[j]){
	// 		nums[i] = nums[j]
	// 		i++
	// 	}
	// }
	set := make(map[int]struct{})
	var tempArr []int

	for(int j = 0; j<len(nums); j++){
		if _, ok := set[nums[j]]; !ok{
			set[nums[j]] = struct{}{}
			tempArr = append(tempArr, nums[j])
		}
	}
	nums = tempArr
	return len(tempArr)
}

func main(){
	nums := [] int {1,1,2}
	fmt.Println(removeDuplicate(nums))
}