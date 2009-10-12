/*
 * Copyright (C) 2009 Christopho, Zelda Solarus - http://www.zelda-solarus.com
 * 
 * Zelda: Mystery of Solarus DX is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Zelda: Mystery of Solarus DX is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef ZSDX_KHORNETH_H
#define ZSDX_KHORNETH_H

#include "Common.h"
#include "entities/Enemy.h"

/**
 * The Khorneth boss from @PyroNet.
 */
class Khorneth: public Enemy {

  protected:

    void initialize(void);
    void restart(void);
    int get_attack_consequence(EnemyAttack attack, Sprite *this_sprite);
    int custom_attack(EnemyAttack attack, Sprite *this_sprite);

  public:

    Khorneth(const ConstructionParameters &params);
    ~Khorneth(void);

};

#endif

