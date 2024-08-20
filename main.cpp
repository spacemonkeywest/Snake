#include<SFML/Graphics.hpp>
#include<queue>

class Game {
	private:
		sf::RenderWindow window;
		std::queue<sf::RectangleShape> body;
		enum direction {LEFT, RIGHT, UP, DOWN};

	public:
		Game() {
			window.create(sf::VideoMode(600, 600), "Snake");
			body.push(sf::RectangleShape(sf::Vector2f(25, 25)));
			body.front().setPosition(300, 300);			
		}

		void play() {
			while (window.isOpen()) {
				sf::Event event;

				while (window.pollEvent(event)) {
					if (event.type == sf::Event::Closed) {
						window.close();
					}
				}

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
					window.close();
				}

				window.clear();
				window.display();
			}
		}

};

int main() {
	Game game;
	game.play();
	return EXIT_SUCCESS;
}
