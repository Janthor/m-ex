#To be inserted @ 800692e8
.include "../../../Globals.s"
.include "../Header.s"

lwz r12,OFST_Metadata_InternalIDCount(r12)
subi  r12,r12,6
cmpw	r0, r12
