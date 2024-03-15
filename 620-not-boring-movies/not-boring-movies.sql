SELECT
    *
FROM
    Cinema
WHERE
    Mod(id,2) = 1
    AND description <> 'boring'
ORDER BY rating DESC;