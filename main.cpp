#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: washingMachine
//  action 1: the washing machine washes clothes
washingMachine.washClothes();
//  action 2: the washing machine rinses clothes
washingMachine.rinseClothes();
//  action 3: the washing machine spins
washingMachine.spin();

//  2)
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog fetches a ball
dog.fetchBall();
//  action 3: the dog wags its tail
dog.wagTail();

//  3)
//  Noun: refrigerator
//  action 1: the refrigerator goes for a jog
refrigerator.goForJog();
//  action 2: the refrigerator writes a poem
refrigerator.writePoem();
//  action 3: the refrigerator dreams of being a microwave
refrigerator.dreamOfBeingMicrowave();

//  4)
//  Noun: television
//  action 1: the television binge-watches humans
television.bingeWatchHumans();
//  action 2: the television changes channels by itself
television.changeChannelsItself();
//  action 3: the television pretends to be a radio
television.pretendToBeRadio();

//  5)
//  Noun: toaster
//  action 1: the toaster juggles bread
toaster.juggleBread();
//  action 2: the toaster tells a joke
toaster.tellJoke();
//  action 3: the toaster takes a selfie
toaster.takeSelfie();

//  6)
//  Noun: phone
//  action 1: the phone calls someone
phone.call();
//  action 2: the phone hangs up
phone.hangUp();   
//  action 3: the phone dials a number
phone.dialNumber();

//  7)    
//  Noun: shoe
//  action 1: the shoe slides on the floor
shoe.slideOnFloor();
//  action 2: the shoe slides on the table
shoe.slideOnTable();
//  action 3: the shoe slides on the wall
shoe.slideOnWall();

//  8)
//  Noun: sandwich
//  action 1: the sandwich eats bread
sandwich.eatBread();
//  action 2: the sandwich eats lettuce
sandwich.eatLettuce();
//  action 3: the sandwich eats cheese
sandwich.eatCheese();

//  9)
//  Noun: lamp
//  action 1: the lamp tries to outshine the sun
lamp.tryToOutshineSun();
//  action 2: the lamp does a light show
lamp.doLightShow();
//  action 3: the lamp pretends to be a disco ball
lamp.pretendToBeDiscoBall();

//  10)
//  Noun: chair
//  action 1: the chair does a handstand
chair.doHandstand();
//  action 2: the chair spins like a top
chair.spinLikeTop();
//  action 3: the chair tries to walk
chair.tryToWalk();




#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
