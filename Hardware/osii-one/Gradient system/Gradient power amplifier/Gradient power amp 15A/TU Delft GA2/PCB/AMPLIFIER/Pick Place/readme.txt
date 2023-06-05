Instructions for assembly at Eurocircuits

Upload the zip file with the gerber files
After it has been verified open the PCB visualizer to view the PCB
Check the box "Include assembly" and select the PCBA visualizer tab
Press the button edit assembly data and Upload the BOM (Bill Of Materials)
Set the column information correctly:
Data header row:	1
Data start from row:	2
Data ends at row:	59
label the columns correctly:
Quantity, Designator and manufacturer part number
All other columns can be set to "None"

After that some components might not be recognized or should not be assembled.
Always use the exact part numbers in the search field at the bottom of the online tool
to find the correct parts. The Trough Hole transistors/FETs that are mounted onto
the heatsink should be soldered afterwards during final assembly
P2,5,8	TH	are 2 separate parts to order. MSTB2.5HC/2-GF (1923979) is the part to be selected. 1912074 is the counter part
C26,29,59,62,92,95	Do Not Assemble	, mark as Not placed in the "Supplied by:" field
R58,129,200	Do Not Assemble	, mark as Not placed in the "Supplied by:" field
Q88	Should first be mounted onto the heatsink before soldering. Mark as Not placed in the "Supplied by:" field
Q10,25,60	Should first be mounted onto the heatsink before soldering. Mark as Not placed in the "Supplied by:" field
Q13,38,63	Should first be mounted onto the heatsink before soldering. Mark as Not placed in the "Supplied by:" field
Q93	Should first be mounted onto the heatsink before soldering. Mark as Not placed in the "Supplied by:" field and "ignored"

In the manufacturers ordering process resistors and capacitors might be replaced
by "regular"parts. This is not advisable for the precise parts !!!!!!

Select the CPL tab
Upload the CPL (Component Placement List) pick and place file "EC_PickAndPlace.txt"
This file has some modified orientations to match the Eurocircuits process
delimiter:	space
data header row:	13
data start from row:	14
data ends at row:	555
The reference designator, side, center x, center y and rotation must be indentified manually
All other columns can be set to "None"
After submitting some parts need to be shifted by using the online tool "Offset Component":
P10,11,12,13
Q87,89,92,94

