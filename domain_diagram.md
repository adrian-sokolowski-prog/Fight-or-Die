```mermaid
classDiagram
    class Game{
        Initialize()
        Update()
        Render()
        ProcessEvents()
    }
    Game *-- Player
    Game *-- Hive
    Game *-- Level
    Game *-- HUD
    Game *-- Screen
    class Player{
        Movement()
        Shoot()
        Dash()
        Sprite
    }
    Player *-- Bullet
    class Bullet{
        Position
        Velocity
        Direction
        Sprite
    }
    Hive *-- Enemy
    class Hive{
        SpawnEnemies()
        Sprite
    }
    Enemy *-- Pathfinding
    class Enemy{
        Velocity
        Direction
        Health
        Sprite
    }
    Pathfinding *-- Grid
    class Pathfinding{
        ProvideDirection()
    }
    class Level{
        TriggerPulse()
        Update()
        Render()
    }
    Level *-- Background
    class Background{
        Sprite
    }
    Level *-- Grid
    class Grid{
        NumberOfRows
        NumberOfColumns
        PositionoOfObject
    }
    Level *-- Wall
    class Wall{
        Position
        Health
        Sprite
    }
    Level *-- CommandCenter
    class CommandCenter{
        Position
        Health
        Sprite
    }
    Level *-- Pulse
    class Pulse{
        Radius
        Expansion()
        LocateEnemies()
        CircleShape
    }
    Wall *-- Grid
    CommandCenter *-- Grid
    Pulse *-- Enemy
    Marker *-- Pulse
    class Marker{
        Placement
        TimeToLive()
        Sprite
    }
    HUD *-- Score
    class HUD{
        Update
        Render
    }
    Score *-- Enemy
    class Score{
        Font
        Text
        Incrementation()
    }
