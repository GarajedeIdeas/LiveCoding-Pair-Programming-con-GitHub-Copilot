// Mars Rover code kata
//


// Implement commands that move the rover forward/backward (f,b).
// Implement commands that turn the rover left/right (l,r).
// Implement wrapping at edges. But be careful, planets are spheres. Connect the x edge to the other x edge, so (1,1) for x-1 to (5,1), but connect vertical edges towards themselves in inverted coordinates, so (1,1) for y-1 connects to (5,1).
// Implement obstacle detection before each move to a new square. If a given sequence of commands encounters an obstacle, the rover moves up to the last possible point, aborts the sequence and reports the obstacle.
/******************************************** */


fn main() {
    println!("Hello, world!");
    let mut rover = Rover::new(0, 0, Direction::North);
    rover.execute("ffrff");
}

// You are given the initial starting point (x,y) of a rover and the direction (N,S,E,W) it is facing.
#[derive(Debug)]
#[derive(PartialEq)]
enum Direction {
    North,
    South,
    East,
    West,
}

struct Rover {
    x: i32,
    y: i32,
    direction: Direction,
}

// The rover receives a character array of commands.
impl Rover {
    fn new(x: i32, y: i32, direction: Direction) -> Rover {
        Rover { x, y, direction }
    }

    fn move_forward(&mut self) {
        match self.direction {
            Direction::North => self.y += 1,
            Direction::South => self.y -= 1,
            Direction::East => self.x += 1,
            Direction::West => self.x -= 1,
        }
    }

    fn move_backward(&mut self) {
        match self.direction {
            Direction::North => self.y -= 1,
            Direction::South => self.y += 1,
            Direction::East => self.x -= 1,
            Direction::West => self.x += 1,
        }
    }

    fn turn_left(&mut self) {
        match self.direction {
            Direction::North => self.direction = Direction::West,
            Direction::South => self.direction = Direction::East,
            Direction::East => self.direction = Direction::North,
            Direction::West => self.direction = Direction::South,
        }
    }

    fn turn_right(&mut self) {
        match self.direction {
            Direction::North => self.direction = Direction::East,
            Direction::South => self.direction = Direction::West,
            Direction::East => self.direction = Direction::South,
            Direction::West => self.direction = Direction::North,
        }
    }

    fn execute(&mut self, commands: &str) {
        for command in commands.chars() {
            match command {
                'f' => self.move_forward(),
                'b' => self.move_backward(),
                'l' => self.turn_left(),
                'r' => self.turn_right(),
                _ => (),
            }
        }
    }
}

// one unit test
#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        assert_eq!(2 + 2, 4);
    }

    #[test]
    fn test_rover() {
        let mut rover = Rover::new(0, 0, Direction::North);
        rover.execute("ffrff");
        assert_eq!(rover.x, 2);
        assert_eq!(rover.y, 2);
        assert_eq!(rover.direction, Direction::East);
    }

    #[test]
    fn test_rover_turn_left() {
        let mut rover = Rover::new(0, 0, Direction::North);
        rover.turn_left();
        assert_eq!(rover.direction, Direction::West);
    }

    #[test]
    fn test_rover_turn_right() {
        let mut rover = Rover::new(0, 0, Direction::North);
        rover.turn_right();
        assert_eq!(rover.direction, Direction::East);
    }

    #[test]
    fn test_rover_move_forward() {
        let mut rover = Rover::new(0, 0, Direction::North);
        rover.move_forward();
        assert_eq!(rover.x, 0);
        assert_eq!(rover.y, 1);
    }

    #[test]
    fn test_rover_move_backward() {
        let mut rover = Rover::new(0, 0, Direction::North);
        rover.move_backward();
        assert_eq!(rover.x, 0);
        assert_eq!(rover.y, -1);
    }
}