#To be inserted @ 800decdc
.include "../../Globals.s"
.include "../Header.s"

.set  REG_PlayerGObj,30
.set  REG_PlayerData,31

#Check for an onTaunt function
  lwz r3,OFST_mexData(rtoc)
  lwz r3,Arch_FighterFunc(r3)
  lwz r3,Arch_FighterFunc_onTaunt(r3)
  lwz r4,0x4(REG_PlayerData)
  mulli r4,r4,4
  lwzx  r12,r3,r4
  cmpwi r12,0
  beq Exit
#Branch to function
  mr  r3,REG_PlayerGObj
  mtctr r12
  bctrl

Exit:
  lwz r0,0x0024(r1)
