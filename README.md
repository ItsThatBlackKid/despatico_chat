# despatico_chat
A TCP/IP chat program with support for various commands. 
Wrote this for my Swinburne Intro To Programming assignment

## How to use 

### Setting up
just simply `git clone git@github.com:ItsThatBlackKid/despatico_chat.git`
then, using the msys version provided by MinGW `cd [despacito_directory]`.
###Building & Running
To build the binary you'll have to run the `build.sh` file `./build.sh` 
Then to run that binary simply execute the `run.sh` file `./run.h`

### Connecting and sending messages

Both the client and host logic have been bundled together so there aren't different executables for the two. 

To run the program as a host:
Enter your port number in the textbox labelled "Enter Port Here" and that's it. Despacito chat
will start listening for clients as the host program. 

To run the program as a client: 
Enter the host ip in the textbox labelled "Enter host here"
Enter the host port in the textbox labelled "Enter port here"
Enter your username in the username textbox
If there is a host with the given IP, Despacito chat should connect instantly

Sending a message:
Messages are straight forward, just enter messages 
in the message textbox and press send. 

## Features

### Commands
Despacito chat allows you to send "commands" which are parsed locally
The syntax for commands is: `![type] [value]`
Where `[type]` indicate what logic to perform on the `[value]`

Command types: 
`!shout [value]`: this command sets all letters to uppercase
`!whisper [value]`: this command sets all letters to lowercase 
`!spongemock [value]`: (not yet implemented) -- this command creates a mixcase string, much like the famed spongemock meme

### Users
Users are just commands that are sent upon connection to the host
they share the same syntax as commands but `[value]` is tokenized even further

The program uses users to identify the origin of each message sent. Hosts are not treated as users. 

Each user has their message automatically signed before it is sent. The signature is simply the user's username.
Host messages are not signed

A list of connected users is stored and viewed beside the messages panel

Syntax: 
`!user [username] [ip]`: this creates a `user` struct which stores the values of `[username]` & `[ip]`

### Curse word censoring 
Despacito Chat will replace anything it views as a "curse word" with the word "DESPACITO"

The program loops through each case permutation of the identified "curse word"
So writing fUcK or any other permutation of the word will lead to it being replaced with "DESPACITO" 

## How to contribute 
Honestly, I'd suggest you don't even bother. 
Despacito Chat is built on an outdated and unmainted engine, SwinGame. 
There is very little documentation for the engine and this program probably won't be touched by me after I write this README

However, if you are interested, go ahead and fork this program.

Swingame Documentation: http://www.swingame.com/
