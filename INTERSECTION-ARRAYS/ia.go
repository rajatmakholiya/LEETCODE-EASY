package main

func intersection(nums1 []int, nums2 []int) []int {
    set1 := make(map[int]struct{})
    set2 := make(map[int]struct{})
    result := []int{}

    for _, num := range nums1 {
        set1[num] = struct{}{}
    }

    for _, num := range nums2 {
        set2[num] = struct{}{}
    }

    for num := range set1 {
        if _, exists := set2[num]; exists {
            result = append(result, num)
        }
    }

    return result
}
