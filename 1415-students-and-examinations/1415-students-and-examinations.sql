# Write your MySQL query statement below
SELECT  S.student_id, S.student_name, su.subject_name,
        COUNT(E.subject_name) as attended_exams
FROM Students as S
JOIN Subjects as Su
LEFT JOIN Examinations as E on s.student_id = E.student_id and Su.subject_name = E.subject_name
GROUP BY S.student_id , Su.subject_name
ORDER BY student_id , subject_name