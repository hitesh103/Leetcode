SELECT query_name,
    ROUND(AVG(CAST(rating as decimal) / position), 2) as quality,
    ROUND(SUM(case when rating < 3 then 1 else 0 end) * 100 / count(*), 2) as poor_query_percentage
FROM
    queries
WHERE
    query_name IS NOT null
GROUP BY
    query_name;