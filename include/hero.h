#ifndef DOTA2D_HERO_HEADER
#define DOTA2D_HERO_HEADER
#include "unit.h"
// #include "item.h"
// #include "ability.h"
#include <vector>


namespace dota2d
{
  class Hero : public Unit
  {
  protected:
    int m_dead_duration;
    int m_level;
    vector<> m_kills;
    vector<> m_deads;
    vector<> m_assists;
    vector<> m_abilities;
    vector<> m_items;

  public:
    Hero() : Unit() {}

    Hero(int,int, vector<Ability>, vector<Item>) : Unit()
    {

    }

    Hero(int,int, vector<Ability>, vector<Item>,  //self

      // Unit
      sf::Vector2f _spawn_pos, std::string _unit_name, FaceDirectionType _face, //unit
      //BasicStats:
      int _stun_d, int _silence_d, int _unattack_d, int _untarget_d,
                 int _teleport_cd,int _move_speed,int _teleport_ct,
                 int _gold_ps,int _gold,
                 int _intel,int _streng,int _agili,
                 int _attackrange,int _attackspeed,int _physicD,int _magicD, //for baseAttack
                 std::string _textureTxt, sf::Vector2f _position, //for baseSprite
                 int _dayv, int _dayob, int _nightv, int _nightob, invisibleType _invistype, int _invisduration,  //for baseVision
                 int _hp,int _maxhp, float _hpregen, int _mana, int _maxmana, float _manaregen, float _magicR, float _physicR //for baseHealth
    ) : Unit
            (
              _spawn_pos, _unit_name, _face, //unit
              _stun_d, _silence_d, _unattack_d, _untarget_d, //basicStats
               _teleport_cd,_move_speed,_teleport_ct, //basicStats
               _gold_ps,_gold, //basicStats
               _intel,_streng,_agili, //basicStats
               _attackrange,_attackspeed,_physicD,_magicD, //for baseAttack
               _textureTxt, _position, //for baseSprite
               _dayv, _dayob, _nightv, _nightob, _invistype, _invisduration,  //for baseVision
               _hp,_maxhp,  _hpregen, _mana, _maxmana,  _manaregen,  _magicR,  _physicR //for baseHealth
            )
    {

    }
  };
}

#endif
