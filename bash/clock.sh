# #!/bin/bash

# # Function to print the current time
# print_time() {
#     clear
#     local time=$(date +"%H:%M:%S")
#     local date=$(date +"%B %d, %Y")  # Updated date format
#     local digits=(
#         $' ##### \n#     #\n#     #\n#     #\n ##### ' # 0
#         $'     # \n     #\n      #\n      #\n      # ' # 1
#         $' ##### \n      #\n ##### \n#      \n ##### ' # 2
#         $' ##### \n      #\n ##### \n      #\n ##### ' # 3
#         $'#     #\n#     #\n ##### \n      #\n      #' # 4
#         $' ##### \n#      \n ##### \n      #\n ##### ' # 5
#         $' ##### \n#      \n ##### \n#     #\n ##### ' # 6
#         $' ##### \n      #\n     # \n    #  \n   #   ' # 7
#         $' ##### \n#     #\n ##### \n#     #\n ##### ' # 8
#         $' ##### \n#     #\n ##### \n      #\n ##### ' # 9
#         $'       \n   #  \n       \n    #  \n       ' # colon
#     )

#     # Get terminal width and height
#     local width=$(tput cols)
#     local height=$(tput lines)

#     # Calculate position to center the clock
#     local x=$((width/2-30))  # 30 is half the width of the clock
#     local y=$((height/2-5))  # 5 is half the height of the clock

#     # Print the date above the box
#     tput cup $((y-3)) $((x+67/2-${#date}/2))  # Adjusted position to above the box
#     echo $date

#     # Draw a box around the clock
#     tput cup $((y-2)) $((x-2))
#     echo -n "+"
#     for ((i=0; i<67; i++)); do echo -n "-"; done  # Extended by five positions
#     echo "+"

#     for ((i=0; i<7; i++)); do
#         tput cup $((y-1+i)) $((x-2))
#         echo -n "|"
#         tput cup $((y-1+i)) $((x+67))  # Shifted by five more positions
#         echo -n "|"
#     done

#     tput cup $((y+6)) $((x-2))
#     echo -n "+"
#     for ((i=0; i<67; i++)); do echo -n "-"; done  # Extended by five positions
#     echo "+"

#     # Print the time
#     for ((i=0; i<${#time}; i++)); do
#         char=${time:$i:1}
#         if [[ $char =~ [0-9] ]]; then
#             for ((j=0; j<5; j++)); do
#                 tput cup $((y+j)) $((x+i*8))
#                 echo -e "${digits[$char]:j*8:7}"
#             done
#         elif [[ $char == ":" ]]; then
#             for ((j=0; j<5; j++)); do
#                 tput cup $((y+j)) $((x+i*8))
#                 echo -e "${digits[10]:j*8:7}"  # Print colon
#             done
#         fi
#     done
# }

# # Main loop
# while true; do
#     print_time
#     sleep 1  # Update every second
# done


#!/bin/bash

# Function to print the current time
print_time() {
    clear

    local time=$(date +"%H:%M:%S")
    local date=$(date +"%B %d, %Y")  # Updated date format
    local digits=(
        $' ##### \n#     #\n#     #\n#     #\n ##### ' # 0
        $'     # \n     #\n      #\n      #\n      # ' # 1
        $' ##### \n      #\n ##### \n#      \n ##### ' # 2
        $' ##### \n      #\n ##### \n      #\n ##### ' # 3
        $'#     #\n#     #\n ##### \n      #\n      #' # 4
        $' ##### \n#      \n ##### \n      #\n ##### ' # 5
        $' ##### \n#      \n ##### \n#     #\n ##### ' # 6
        $' ##### \n      #\n     # \n    #  \n   #   ' # 7
        $' ##### \n#     #\n ##### \n#     #\n ##### ' # 8
        $' ##### \n#     #\n ##### \n      #\n ##### ' # 9
        $'       \n   #  \n       \n    #  \n       ' # colon
    )
        # Array of foreground colors
    local fg_colors=(31 32 33 34 35 36 37)

    # Select a random foreground color
    local fg_color=${fg_colors[RANDOM % ${#fg_colors[@]}]}

    # Get terminal width and height
    local width=$(tput cols)
    local height=$(tput lines)

    # Calculate position to center the clock
    local x=$((width/2-30))  # 30 is half the width of the clock
    local y=$((height/2-5))  # 5 is half the height of the clock

    # Print the date above the box
    tput cup $((y-3)) $((x+67/2-${#date}/2))  # Adjusted position to above the box
    echo -e "\e[32m$date\e[0m"  # Print date in green

    # Draw a box around the clock
    tput cup $((y-2)) $((x-2))
    echo -n "+"
    for ((i=0; i<67; i++)); do echo -n "-"; done  # Extended by five positions
    echo "+"

    for ((i=0; i<7; i++)); do
        tput cup $((y-1+i)) $((x-2))
        echo -n "|"
        tput cup $((y-1+i)) $((x+67))  # Shifted by five more positions
        echo -n "|"
    done

    tput cup $((y+6)) $((x-2))
    echo -n "+"
    for ((i=0; i<67; i++)); do echo -n "-"; done  # Extended by five positions
    echo "+"

    # Print the time
    for ((i=0; i<${#time}; i++)); do
        char=${time:$i:1}
        if [[ $char =~ [0-9] ]]; then
            for ((j=0; j<5; j++)); do
                tput cup $((y+j)) $((x+i*8))
                echo -e "\e[31m${digits[$char]:j*8:7}\e[0m"  # Print digits in red
            done
        elif [[ $char == ":" ]]; then
            for ((j=0; j<5; j++)); do
                tput cup $((y+j)) $((x+i*8))
                echo -e "\e[34m${digits[10]:j*8:7}\e[0m"  # Print colon in blue
            done
        fi
    done
}

# Main loop
while true; do
    print_time
    sleep 1  # Update every second
done



