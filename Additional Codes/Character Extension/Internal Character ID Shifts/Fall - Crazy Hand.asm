#To be inserted @ 800cc76c
.include "../../../Globals.s"
.include "../Header.s"

lwz r12,OFST_Metadata_InternalIDCount(r12)
subi  r12,r12,5
cmpw	r3, r12
