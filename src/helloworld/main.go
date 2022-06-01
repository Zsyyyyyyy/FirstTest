package main

import (
	"fmt"
	"os"
	"strconv"
)

const Country = "中国"

func main() {

	var (
		firstName string  = "zs\ty"
		age       int     = 20
		skin      string  = "black"
		money     float32 = 12.1
		is_robot  bool    = false
		default_a string  = "22"
	)
	b, c := strconv.Atoi(default_a)
	d := strconv.Itoa(age)

	fmt.Println(firstName, float64(age), skin, money, Country, is_robot, b, c, d, os.Args[1])

	fmt.Print(sum_test(os.Args[1], os.Args[2]))

}
func sum_test(a string, b string) (sum int, int3 int) {
	int1, _ := strconv.Atoi(a)
	int2, _ := strconv.Atoi(b)
	int3 = int1
	sum = int1 + int2
	return
}
