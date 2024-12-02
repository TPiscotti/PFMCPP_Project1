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
//  Noun: cricket
//  action 1: the cricket chirps
cricket.chirp();
//  action 2: the cricket hops
cricket.hop();
//  action 3: the cricket rubs its wings
cricket.rubWings();

//  2)
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog sits
dog.sit();
//  action 3: the dog wags its tail
dog.wagTail();

//  3)
//  Noun: 
//  action 1: the firefly hovers in place
firefly.hoverInPlace();
//  action 2: the firefly lights up
firefly.lightUp();
//  action 3: the firefly goes dim
firefly.dim();

//  4)
//  Noun: person
//  action 1: this person can walk forward
person.walkForward();
//  action 2: this person can smile
person.smile();
//  action 3: this person can jump up and down
person.jumpUpAndDown();

//  5)
//  Noun: clock
//  action 1: the clock ticks
clock.tick();
//  action 2: the clock shows the time
clock.showTime();
//  action 3: the clock shows the date
clock.showDate();

//  6)
//  Noun: pendulum
//  action 1: the pendulum swings left
pendulum.swingLeft();
//  action 2: the pendulum swings right
pendulum.swingRight();
//  action 3: the pendulum stops swinging    
pendulum.stopSwinging();

//  7)
//  Noun: stoplight
//  action 1: the stoplight turns red
stoplight.turnRed();
//  action 2: the stoplight flashes yellow 
stoplight.flashYellow();
//  action 3: the stoplight turns green
stoplight.turnGreen();

//  8)
//  Noun: sine wave
//  action 1: the sine wave oscillates
sineWave.oscillate();
//  action 2: the sine wave sweeps right
sineWave.sweepRight();
//  action 3: the sine wave inverts polarity
sineWave.invertPolarity();

//  9)
//  Noun: my robot
//  action 1: my robot can say hello
myRobot.sayHello();
//  action 2: my robot can spin in a circle counter clockwise
myRobot.rollInCircleCounterClockwise();
//  action 3: my robot can bend its right knee
myRobot.bendRightKnee();

//  10)
//  Noun: coffee maker
//  action 1: the coffee maker starts brewing
coffeeMaker.startBrewing();
//  action 2: the coffee maker stops brewing
coffeeMaker.stopBrewing();
//  action 3: the coffee maker beeps when brewing is complete
coffeeMaker.beepWhenBrewingIsComplete();

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
int main() {
    std::cout << "good to go" << std::endl;
    return 0;
}
