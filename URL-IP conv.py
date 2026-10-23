import socket
while True:
    print("================== Welcome to URL-IP converter ==================")
    url = input("Enter Your URL (without protocol) : ") # google.com
    print("=================================================================")
    print(f"The IP is : {socket.gethostbyname(url)}")
    print("================================================================= ")
    quit = input("You want to exit? (y/n) : ")
    if quit.lower() == 'y':
        break