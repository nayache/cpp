# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smith <nayache@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/02 09:29:37 by smith             #+#    #+#              #
#    Updated: 2021/09/02 09:29:40 by smith            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

file='file.txt'
wrongname='lalala.txt'
message='salut comment ca va ?'
filename=( "$file" "$file" "$file" "$file" "$file" "$file" "$wrong" "$wrong")
tab_s1=( "a" "a" "mm" "salut" "salut" "" "salut" "?")
tab_s2=( "x" "aa" "z" "hola" "bonjour" "lol" "hello" "!")

let	"N = 0"

echo $message > $file

while [ $N != "8" ]
do

echo -n -e "\e[32mTest ($(($N + 1)))\e[0m : "
echo -e "\e[1;38m./replace \""${filename[$N]}"\" \""${tab_s1[$N]}"\" \""${tab_s2[$N]}"\"\e[0;38m"
sleep 2 && ./replace "${filename[$N]}" "${tab_s1[$N]}" "${tab_s2[$N]}"

echo -e "\ncat $file.replace:"
echo "------------------------------------------------------"
cat $file.replace
echo -e "------------------------------------------------------\n"
sleep 1

let "N = N + 1"

done
