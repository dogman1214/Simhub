<img width="1319" height="900" alt="image" src="https://github.com/user-attachments/assets/4b2c3a9a-531b-4dba-87c2-f3727607f029" />---
title: "Simhub"
author: "Raghav"
description: "A hackpad mission, where I create a keyboard to adress all of my sim-racing needs. This macropad stands out from other ones because clicking down on the rotary encoder toggles it from custom macro shortcuts to a classic numpad. This is my first time using freecad and KiCAD, so appreciate your feedback.
"
created_at: "2026-03-20"
---

# 6/15/2026: setting things up
I don’t really know how kicad works, but that’s fine. I’ll learn.
The struggle right now, is importing everything. I belive I imported the libraries required, but I can’t find the symbols, which is wierd. Cheers!
<img width="1600" height="870" alt="image" src="https://github.com/user-attachments/assets/c7024422-8cb2-4a97-933b-b135ddf1df6c" />

**Total time spent: 0.25 hours**

# 6/16/2026: kicad stuff
Finished wiring the schematics.
I want to use 12 keys so that in the sim-racing game, I can set views, change traction control, brake balance, and all of the intricates.
I am also including one rotary encoder for things like volume control, so I can turn down the volume when my parents come by :)
<img width="1319" height="900" alt="image" src="https://github.com/user-attachments/assets/66138356-086d-4f54-8b2e-54cadf39c163" />
**Total time spent: 0.9 hours**

# 6/17/2026: started pcb
Completed all the routing of the PCB
I realized that routing is a very sketchy task, especially for someone as inexperienced in this field as me. Fortunately, I found a plugin that does the routing for you!
It is called “Autorouting”
Please check it out, its really a life-saver.
Now onto the CAD portion of this project.
<img width="1280" height="900" alt="image" src="https://github.com/user-attachments/assets/064c6ed2-0501-47f9-a758-10a030c92822" />

**Total time spent: 0.5 hours**

# 6/18/2026: fusion GENIUNELY TRASH
Trying to fix FUSION. I have ZERO IDEA why fusion isn’t working, just a blank screen. Tried all fixes on the web, but to no avail. Anyone here please help
Along side that I was just setting up mental models of what the model should be like. Sketching things out on a notepad. I want it to be very simple and stuff, maybe translucent. Also pored over the KiCad PCB vs Schematic, ran ERC, DRC, and everything
<img width="1382" height="900" alt="image" src="https://github.com/user-attachments/assets/e79eee9d-1527-4e1e-99ef-f17844d62127" />

**Total time spent: 2.1 hours**

# 6/19/2026: Working via freecad
Fusion Failed…
Fusion CAD software is genuinely terrible. Doesn’t work on my RTX 4080 even after multiple reinstalls. So I switched to FreeCAD. It is pretty different, but I am getting the hang of it.
I have completed a lot of the CAD work for this project, so we are getting there, to the point where we are done I guess. Most of the case is done, mayb the cap part remaining. So basically I finished the initial shape and everything. Like the bottom of the case and stuff. I'm planning not to add a sort of plate, because I think the top part of the thing I'll make will support thge PCB by holding it up.
<img width="1363" height="900" alt="image" src="https://github.com/user-attachments/assets/60b0c974-6496-414f-836b-adaba03926aa" />

**Total time spent: 2.6 hours**

# 6/20/2026: Freecad brainslop
djusting to FreeCAD is difficult after fusion doesn’t work anymore. After long coercion I am able to create a rough sketch that I can develop further.
fingers crossed, I can hopefully finish this project nice and tidy! 'm working on the cap, i set up the pcb and stuff and its all going along nicely. I alighned the PCB and everything, started placing the switches and all. The cap/cover the top part is in progress. All going well. 
<img width="1600" height="770" alt="image" src="https://github.com/user-attachments/assets/07c5cae3-623a-4d4d-b9a0-06f03ea7a0c1" />

**Total time spent: 1.2 hours**

# 7/10/2026: Still working on the freecad stuff. 
The case is basically done, but i wanna align all the keycaps and rotary encoders so taht i get a good visual representation of wth i even made. Yeah so the case is practically finished. Adding switches and keycaps so I can visualize whatg the placement of evberything is. This is very annoying, because I want it to be as accurate a spossible so there are no conflicts and potential disturbances. 
<img width="644" height="900" alt="image" src="https://github.com/user-attachments/assets/d0d89b29-ec59-495b-ab31-26cb0eb3c4ec" />

**Total time spent: 0.91 hours**

# 7/15/2026: Blendering Rendering
I imported my model into blender for rendering a nice photo so that people have a good idea what I’m making. Probably will re-render with some adjustments, along with turning on denoise and then adding some artificial ISO noise. But hopefully the first ship is coming by soon! I placed very aesthetic objects, set up a custom camera, and tried to frame the image to look as yummy as possible. So I applied textures and stuffc, created the environemtns. Created a custom camera (yes, custom camera. It is photographer plugin where I create my own lense and all thats simulakted so its as realistic and aesthetic as possible), I'm trying to go with that dreamy fuzzy glow, with objects placed nextg to it for aeshtewtic purtposes and to add a sense of scale. 
<img width="1600" height="900" alt="image" src="https://github.com/user-attachments/assets/e53c4735-519f-4016-81b7-b7933cd0d17b" />

**Total time spent: 2.8 hours**

# 7/16/2026: Blending my stuff even more
Trying to see how to improve the example image. But I’m also building the github, along with drafting the silkscreen
I’m trying to follow the guide, but improve on eveyrthing, like a better and more extensive readme and whatnot. As per the blender render, I’m taking feedback from my family to see what is too much and what to improve.
Idk what to improve, but somethings off...
So I'm tweakinge very settings for it to turn out perfect. Turns out some parts of the case need adjustment like the hight and spacing and stuff, so i kinda fixed that. Will export into the thing later for production. But basically I twqeak settings, placements. It was intiially very laggy, so I had to go through the verticieis to simplify it inside. One example whas the iphone, it waS A FIOLL MODEL (excluding motherboard ofc), but the back and all weren't visible, so I went through the vertiiciues and deleted wahat was unneccesary. And did it to many objects, including the environemnt. One problem was that if I didn't have liek the full ebnvirfonetn with walls and eveyrhting, then the lighting own't be rendered properlys oI have to put a proper room and all, but that give s a great deal of performance cost. The wood textures aare very highh res, sot hat's cutting a lot of performance. BUt I want to keep it that way. I downscaled it to 75% so that it'll run well. And overfall I just did a lot of optimizing, tweaking, and tesitn gout different thigns. It took my whole day from lunch time to sleep, exclusding dinner. 
<img width="1457" height="900" alt="image" src="https://github.com/user-attachments/assets/8172bdec-d958-4f49-a855-f0315b8a6d92" />

**Total time spent: 8.5 hours**

# 7/20/2026: Wrapping up stuff, maybe.
Everthing is practically done! The github is set up, the demo is linked. I just have to recieve the files.  Really just proring over the fine details to see whetehr i missed sum. Yeah so i set up the github and everything - very time consuming since there is a specific scturcture and eveyrthing that I have to follow. 
<img width="1600" height="855" alt="image" src="https://github.com/user-attachments/assets/609f888f-09a6-45c5-bb38-7ecae2130046" />

**Total time spent: 1.6 hours**

# 8/15/2026: finalizing stuff. Submitting after this
Just wrapping up github info. Tweaking the readme, BOM, attaching final images. Referrinmg to KiCad stuff to export images and for BOM and everything. 
<img width="1453" height="900" alt="image" src="https://github.com/user-attachments/assets/c831545a-9fdd-4d69-9139-f126dc146661" />

**Total time spent: 1.1 hours**

# 9/15/2026: Transition to Forge
AWorking on transferring to this page. 
"A custom macropad, where I design a small keyboard to address all of my sim-racing needs. This is mainly a design project for now. I won’t be able to recieve the parts I got funding for (so I didn’t use the funding) before September 30th, so I’m submitting this design. This macropad stands out from other ones because clicking down on the rotary encoder toggles it from custom macro shortcuts to a classic numpad. This is my first time using freecad and KiCAD, so appreciate your feedback.
This macropad consists of 12 switches and one rotary encoder with a switch feature. It is designed with a 3d-printable body, so feel free to use whatever colors you want! Same with the rotary encoder knob.
Thanks a lot guys, this mission really taught me well about CAD and PCB design. It paved the way to my current project, which you can check in my profile."
<img width="978" height="872" alt="image" src="https://github.com/user-attachments/assets/f828f319-918e-4156-9998-37703cf3509b" />

**Total time spent: 0.15 hours**

# 9/16/2026: Alr everything set up and ready to go!
the journal is set up. The main problem is hackatime timing. The problem is that in lapse nothing is ordered, so IDK which vbideo goes to which, which could be partly my fault, but I logged all that on ahckatime, so IDK man. Heres my account if yall need it: https://lapse.hackclub.com/user/@raghavsharma1214
<img width="1504" height="1040" alt="image" src="https://github.com/user-attachments/assets/1764acb7-d4c6-44aa-910e-aec670527702" />

**Total time spent: 0.5 hours**
