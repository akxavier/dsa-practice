class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        goingLeft = []
        goingRight = []

        for asteroid in asteroids:
            if asteroid > 0:
                goingRight.append(asteroid)
            elif asteroid < 0:
                while goingRight and goingRight[-1] + asteroid < 0:
                    goingRight.pop()
                if goingRight:
                    if goingRight[-1] + asteroid == 0:
                        goingRight.pop()
                else:
                    goingLeft.append(asteroid)

        return goingLeft + goingRight
