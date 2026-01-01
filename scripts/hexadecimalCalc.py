# Hexadecimal calculator
# Simple function to get user input
def get_numbers():
    hex1 = input("Enter hex number: ")
    hex2 = input("Enter hex number: ")

    return hex1, hex2

#Main Function where the math occurs. Takes in user input from prior function
def calculator(num1, num2):
    #Deciding whether we are adding or subtracting
    add_or_subtract = input("Enter addition or subtraction: + or - : ")
    if add_or_subtract == "+":
        # Specifying that these are base 16 numbers then doing the calculation
        result = (int(num1,16) + int(num2,16))
        # If the resulted number is larger than 16^16 change it too it's signed representation
        if result > 0x10000000000000000:
            result = result - 0x10000000000000000
        print(hex(result))
    elif add_or_subtract == "-":
        result = (int(num1,16) - int(num2,16))
        if result < 0:
            #If result is smaller than zero convert it to its signed representation
            result = (-0xffffffffffffffff ^ result) + 1
        print(hex(result))

    else:
        print("Invalid input")


ret_hex1, ret_hex2 = get_numbers()


if __name__ == '__main__':
    calculator(ret_hex1,ret_hex2)


