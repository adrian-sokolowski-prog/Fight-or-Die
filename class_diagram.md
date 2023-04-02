```mermaid
classDiagram

    Game *-- CommandCenter
    Game *-- Hive
    Game *-- Enemy
    Game *-- Wall
    Game *-- Grid
    Game *-- Algorithm
    Game *-- ParticleSystem
    Game *-- Marker
    Game *-- Toxic
    Game *-- Light
    Game *-- Player
    Game *-- Hive
    Game *-- HUD
    Game *-- Collision
    Game *-- Platform
    Game *-- Toxic

    ParticleSystem *-- Particle
    Collision *-- CollisionObject
    Hive *-- Enemy

    Player *-- BulletCreate

    Wall *-- Grid

    BulletCreate *-- BulletUpdate
    Light *-- Player
    CommandCenter *-- Grid

    Pulse *-- Enemy

    Marker *-- Pulse

    Algorithm *-- Grid

    Enemy *-- Hive
    Enemy *-- Marker
    Enemy *-- Pulse
    Enemy *-- Algorithm


    class Game{
        Initialize()
        Update()
        Render()
        ProcessEvents()
        LoadTextures()

        Textures
        Font
        Colors
        Positions
    }

    class Player{
        Movement()
        Shoot()
        Dash()
        GetWall()
        Sprite
        Rotation
        Dash
        Facing
        ShootBullets()
        WallBounce()
    }
    class Particle{
        Shape
        Velocity
        Positions

        Update()
        Render()
    }
    class ParticleSystem{
        Particle
        Positions

        Update()
        Render()
    }
    class Light{
        Candle

        Update()
        Render()
    }
    class BulletCreate{
        Sprite
        GetBullets
        AmountOfBullets

        Render()
        Update()

    }
    class BulletUpdate{
        Sprite
        Speed

        OnScreen()
        Render()
        InUse()

    }
    
    class Hive{
        Positions
        Sprite
    }
    class Toxic{
        Position
        Sprite
        TimeToLive

        Update()
        Render()
    }
    
    class Enemy{
        SpawnEnemies()
        Update()
        SetPath()
        GetHive()

        Destination
        Velocity
        Sprite
    }
    
    class Algorithm{
        BreadthFirst()
        Neighbours()
        GetID()

        Grid
        Queue
        GridSize
        GridPositions
    }
    
    class Platform{
        Sprite
        Size
        OnPlatform

        Render()
        SetOnPlatform()
        IsOnPlatform()
    }
    class Collision{
        Collision()
    }
    class CollisionObject{
        ProjectOntoAxis()
        Points
    }
    class Grid{
        NumberOfRows
        NumberOfColumns
        PositionOfObject
        ID
        PreviousID
        Neighbours

        AddNeighbour()
        IsMarked()
        SetMarked()
    }
   
    class Wall{
        Render()
        Sprite
    }
    
    class CommandCenter{
        Update()
        Render()
        Position
        Sprite
    }
   
    class Pulse{
        Radius
        Expansion()
        LocateEnemies()
        CircleShape
    }
    
    class Marker{
        Placement
        TimeToLive()
        Sprite
    }
    class HUD{
        Update
        Render
        Text
    }
