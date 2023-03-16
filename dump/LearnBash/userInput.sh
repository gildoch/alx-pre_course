#!/bin/bash

#echo "Enter name"
#read name

#Read input on the same line
#read -p 'username : ' user_var
#Read passwod in silent mode(hide)
#read -sp 'password : ' pass_var
#echo "Username : $user_var"
#echo "Password : $pass_var"

echo "Enter names : "
read -a names
echo "Names: ${names[0]},${names[1]}"

