# advrc - Advanced Rolling Codes
Rolling Codes are used in cars to authenticate that you're the one who has the key and wants to open the car.
But this can be broken pretty easily by using Samy Kamkar's jamming technique.
Advanced Rolling Codes are putting in an extra layer of security by adding datetime to the generated hash, so it cannot be played back.

In this scenario I have replaced the radio reciever/transmitter with an input string (because I don't have one), with this making it almost impossible for the hashes to match. (I am thinking of giving it a 5 second range)

! You can fork my code, and edit my code, but please provide credit for it. !

By definition if a GitHub repository dosen't have a licence, it is automatically protected by intellectual property/copyright.
