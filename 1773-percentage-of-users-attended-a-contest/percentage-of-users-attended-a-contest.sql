WITH ContestRegistrations AS (
    SELECT contest_id, COUNT(DISTINCT user_id) AS registered_users
    FROM Register
    GROUP BY contest_id
)
SELECT 
    cr.contest_id,
    ROUND((cr.registered_users / (SELECT COUNT(*) FROM Users)) * 100, 2) AS percentage
FROM 
    ContestRegistrations cr
ORDER BY 
    percentage DESC, contest_id ASC;