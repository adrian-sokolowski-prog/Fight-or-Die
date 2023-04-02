#include "Toxic.h"

Toxic::Toxic(sf::Texture& t_texture, sf::Texture& t_explosion, sf::Vector2f& t_pos)
{
	m_barrel.setTexture(t_texture);
	m_barrel.setPosition(t_pos);
	m_barrel.setOrigin(getCenter(m_rectBarrel));

	m_explosion.setTexture(t_explosion);
	m_explosion.setPosition(t_pos);
	m_explosion.setOrigin(getCenter(m_rectExplosion));
}

void Toxic::update(double dt)
{
	// if explosion happened start the explosions time too live
	if (m_explosionHappened == true)
	{
		m_currentTime += dt;
		if (m_currentTime > TTL)
		{
			del = true;
			m_explosionHappened = false;
			m_currentTime = 0;
		}
	}
	
}

void Toxic::render(sf::RenderWindow& t_window)
{
	// if explosion didnt happen, draw barrel
	if (m_explosionHappened == false)
	{
	t_window.draw(m_barrel);
	}
	// if it happened draw explosion
	else
	{
		t_window.draw(m_explosion);
	}
}

sf::Vector2f const Toxic::getCenter(sf::IntRect t_rect)
{
	sf::Vector2f origin;

	origin.x = t_rect.width / 2.0f;
	origin.y = t_rect.height / 2.0f;

	return origin;
}
