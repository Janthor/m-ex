#ifndef MEX_H_EFFECTS
#define MEX_H_EFFECTS

#include "structs.h"
#include "datatypes.h"
#include "obj.h"

/*** Structs ***/

struct Effect
{
    GOBJ *child;
    GOBJ *gobj;
    int x8;
    int xc;
    void *callback;
    int x14;
    int x18;
    int x1c;
    float x20;
    short lifetime;
    char x26;
    char x27;
    char x28;
    char x29;
};

struct Particle
{
    int x0;
    int x4;
    int x8;
    int xc;
    int x10;
    int x14;
    int x18;
    int x1c;
    int x20;
    int x24;
    int x28;
    int x2c;
    int x30;
    int x34;
    int x38;
    int x3c;
    int x40;
    int x44;
    int x48;
    int x4c;
    int x50;
    GeneratorAppSRT *param;
};

struct GeneratorAppSRT // allocated at 803a42b0
{
    int x0;     //x0
    int x4;     //x4
    int x8;     //x8
    int xc;     //xc
    int x10;    //x10
    int x14;    //x14
    int x18;    //x18
    int x1c;    //x1c
    int x20;    //x20
    Vec3 scale; //x24
    int x30;    //x30
    int x34;    //x34
    int x38;    //x38
    int x3c;    //x3c
    int x40;    //x40
    int x44;    //x44
    int x48;    //x48
    int x4c;    //x4c
    int x50;    //x50
    int x54;    //x54
    int x58;    //x58
    int x5c;    //x5c
    int x60;    //x60
    int x64;    //x64
    int x68;    //x68
    int x6c;    //x6c
    int x70;    //x70
    int x74;    //x74
    int x78;    //x78
    int x7c;    //x7c
    int x80;    //x80
    int x84;    //x84
    int x88;    //x88
    int x8c;    //x8c
    int x90;    //x90
    int x94;    //x94
    int x98;    //x98
    int x9c;    //x9c
    int xa0;    //xa0
    u16 xa2;
};

struct Particle2 // created at 80398c90. dont feel like labelling this, offsets are @ 80398de4
{
    int x0;
    int x4;
    u8 x8;
    u8 x9;
    u8 xa;
    u8 xb;
    int xc;
    int x10;
    int x14;
    u8 x18;
    u8 x19;
    u16 x1a;
    u8 x1c;
    u8 x1d;
    int x20;
    int x24;
    u16 x28;
    u16 x2a;
    float x2c;
    float x30;
    float x34;
    float x38;
    float x3c;
    float x40;
    float x44;
    float x48;
    float x4c;
};

/*** Functions ***/

Effect *(*Effect_SpawnSync)(int gfx_id, ...) = (void *)0x8005fddc;
void (*Effect_SpawnAsync)(GOBJ *fighter, Effect *ptr, int type, int gfx_id, ...) = (void *)0x800676f0;
void (*Effect_SpawnFtEffectLookup)(GOBJ *gobj, int gfx_id, int bone, int unk, int destroy_on_leave, ...) = (void *)0x8009f834;
void (*Effect_SpawnItEffectLookup)(GOBJ *gobj, int gfx_id, int bone, Vec3 *offset, Vec3 *scatter, int unk3) = (void *)0x80278800;
void (*Effect_SpawnItEffect)(GOBJ *gobj, int gfx_id) = (void *)0x802787b4;
void (*Effect_DestroyAll)(GOBJ *fighter) = (void *)0x8005b880;
void (*Particle_DestroyAll)(JOBJ *jobj) = (void *)0x8039d5dc;
void (*Effect_PauseAll)(GOBJ *fighter) = (void *)0x8005ba40;
void (*Effect_ResumeAll)(GOBJ *fighter) = (void *)0x8005bac4;

#endif