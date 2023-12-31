# Hackathon-Robot-Arm
Sample Code, Solidworks Parts, Previous PRs, and any extra info

If you're reading this, you are either a massive nerd while doing the Hackathon and bothered to read the readme, or you're a makerspace goblin following in my footsteps. Either way, you are now here.

For the Hackathon kids:

If you're MechE or putting the robot together: What are you doing reading this, get to work. It's big boy LEGO pieces. Your fingers might get a bit raw by the end but you'll be fine. My peak is putting together one of those robots in less than 35 minutes solo, AND this project didn't exist my freshman year, so you have no excuses. If you think that 'oh I'm an ME, I design things I don't have to put things together' yeah guess again. As a senior ME I can tell you that you spend as much time putting together prototpyes than editing them. If you are on a group of all ME students with no coding group, you'll still be fine. A huge part of being an ME is being the person that can learn anything on the fly. 

If you're CompSci or doing the coding, it should be super self-explanatory. The most common errors are all your fault; the IDE is set to the wrong port, or the wrong board, or something like that. Check that before asking someone. The code is commented and uses one of every command you need unless you decide to go above and beyond. I have seen groups find buttons and make the robot be controlled with the buttons like a controller. I have also seen them use proper servo functions to make the servos move slowly and smoothly which helps.
An example psuedocode of that would be;
while(current angle < wanted angle) {
current angle=current angle + 1;
moveservo(current angle);
delay(20); //The longer this delay the slower it moves
}
This should help the robot perform better and really impress your professor because the robot will stand out, just don't tell them where you learned that trick. 

For my Makerspace goons: 

Whether you're my direct replacement or this manages to survive past the next couple years, good luck. This project sucks to do. However much it sucks for the students doing it, this sucks more for us. Every single part, every single screw, everything is touched by hand and organized and ordered by us. 
Don't forget to order everything in one PR, because it's embarrasing to have to order everything over a couple PRs. Ask me how I know. 

This Repo should have the solidworks files, STLs and 3MFs, previous PRs so you can see what we ordered, and any other bits of random info I thought that you should know. It might be incomplete. If you notice anything you thing I should add, just email me and I can either edit it or give you perms to edit it if I can figure out how.
I print most of the parts on one build plate because it makes it easier when you can just pull the whole plate and snap it into a bag without having to count parts out. The only parts I don't print on the sheet are the bases and the screw measuring things. I print the bases in sets 6 on a mini, use a brim if you lost my 3MF. The screw measuring things should get reused from previous years pretty well since they aren't consumed.
Use regular PEI sheets for this. Although satin sheets are amazing, they don't work as well for bulk prints where there are pieces all over the sheet. Make sure you dial in the z level, it's a smaller gap than a normal print because you really don't want these to fail. The Bambus are work horses since they print so fast, and don't forget you can print on CAPSTONE printers. 
IFixIt magnetic work mats are super useful for counting out screws since it stops them from rolling, so you might need to PR a new one or buy one for yourself. 

I wish you all the best of luck,
Carson Ham, Class of 2024
