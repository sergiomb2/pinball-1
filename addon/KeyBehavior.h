/***************************************************************************
                          KeyBehavior.h  -  description
                             -------------------
    begin                : Wed Jan 26 2000
    copyright            : (C) 2000 by 
    email                : 
 ***************************************************************************/

#ifndef KEYBEHAVIOR_H
#define KEYBEHAVIOR_H

#include "Private.h"

#include "Behavior.h"

/**
 * <p>A Behavior that lets the users move the group with A, S, D, Q, W, E keys.
 * Simply add a KeyBehavior object to a group to be able to move it.</p>
 */
class KeyBehavior : public Behavior {
	public:
		KeyBehavior();
		~KeyBehavior();
		void onTick();
		virtual void onCollision(const Vertex3D & vtxWall, const Vertex3D & vtxOwn, Group * g);
		virtual void onSignal(int signal, Group * sender) {};
	private:
		float m_x, m_y, m_z;
};

#endif // KEYBEHAVIOR_H
