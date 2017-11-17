//~---------------------------------------------------------------------------//
//                     _______  _______  _______  _     _                     //
//                    |   _   ||       ||       || | _ | |                    //
//                    |  |_|  ||       ||   _   || || || |                    //
//                    |       ||       ||  | |  ||       |                    //
//                    |       ||      _||  |_|  ||       |                    //
//                    |   _   ||     |_ |       ||   _   |                    //
//                    |__| |__||_______||_______||__| |__|                    //
//                             www.amazingcow.com                             //
//  File      : AlienLaserNormal.h                                            //
//  Project   : Cosmic Intruders                                              //
//  Date      : Nov 17, 2017                                                  //
//  License   : GPLv3                                                         //
//  Author    : n2omatt <n2omatt@amazingcow.com>                              //
//  Copyright : AmazingCow - 2017                                             //
//                                                                            //
//  Description :                                                             //
//                                                                            //
//---------------------------------------------------------------------------~//

#pragma once

// Cooper
#include "Cooper/Cooper.h"
// CosmicIntruders
#include "Game/include/GamePlay/Laser/AlienLaser.h"

namespace CosmicIntruders {

class AlienLaserNormal
    : public AlienLaser
{
    //------------------------------------------------------------------------//
    // Enums / Constants / Typedefs                                           //
    //------------------------------------------------------------------------//
public:
    COOPER_SMART_PTRS_OF(AlienLaserNormal);


    //------------------------------------------------------------------------//
    // CTOR / DTOR                                                            //
    //------------------------------------------------------------------------//
public:
     AlienLaserNormal();
    ~AlienLaserNormal() override = default;


    //------------------------------------------------------------------------//
    // Score                                                                  //
    //------------------------------------------------------------------------//
public:
    inline int  ScoreValue() const override { return     5; }
    inline bool IsPowered () const override { return false; }


    //------------------------------------------------------------------------//
    // Control Functions                                                      //
    //------------------------------------------------------------------------//
public:
    void Reset  () override;
    void Explode() override;


    //------------------------------------------------------------------------//
    // Update / Render                                                        //
    //------------------------------------------------------------------------//
public:
    void UpdateAlive() override;

    void Render() override;


    //------------------------------------------------------------------------//
    // Init Functions                                                         //
    //------------------------------------------------------------------------//
protected:
    void Init() override;


    //------------------------------------------------------------------------//
    // iVars                                                                  //
    //------------------------------------------------------------------------//
public:
    Cooper::TextureEntity::UPtr m_pVertTexture;
    Cooper::TextureEntity::UPtr m_pHorzTexture;

    float m_horizontalMoveTime;
    float m_verticalTextureHeight;
    float m_verticalTextureHalfHeight;

    SDL_Rect m_aliveRect;
    SDL_Rect m_explodingRect;

}; // class AlienLaserNormal
}  // namespace CosmicIntruders
