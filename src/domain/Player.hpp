#pragma once

class Player {
    public:
        Player();

        void Update(bool isRunning);

        bool CanRun() const;
        bool IsAlive() const;
        float GetStamina() const;
        float GetLife() const;

        void TakeDamage(float amount);

    private:
        static constexpr float MAX_LIFE = 100.0f;
        static constexpr float MAX_STAMINA = 100.0f;
        static constexpr float STAMINA_DRAIN = 15.0f;
        static constexpr float STAMINA_RECOVER = 8.0f;
        static constexpr float MIN_STAMINA_TO_RUN = 20.0f;

        float m_life;
        float m_stamina;
};